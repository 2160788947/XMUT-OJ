#include <cstdio>
#include <cmath>
const double eps = 1e-8;
struct Point
{
    double x, y;
} P[2][4];
double xmult(Point a, Point b, Point c) { // 向量ab与向量ac的叉积
    return (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%lf %lf", &P[i][j].x, &P[i][j].y);
            }
        }
        P[0][3] = P[0][0], P[1][3] = P[1][0];
        bool ints = false;
        for (int i = 0; i < 3 && !ints; i++) {
            for (int j = 0; j < 3 && !ints; j++) {
                // 第0个三角形的第i条边与第1个三角形的第j条边是否相交
                if (xmult(P[0][i], P[0][i + 1], P[1][j]) * xmult(P[0][i], P[0][i + 1], P[1][j + 1]) < eps &&
                    xmult(P[1][j], P[1][j + 1], P[0][i]) * xmult(P[1][j], P[1][j + 1], P[0][i + 1]) < eps) {
                    ints = true;
                }
            }
        }
        if (ints) {
            puts("intersect");
            continue;
        }
        bool in = false;
        for (int i = 0; i < 2; i++) {
            double area = fabs(xmult(P[i][0], P[i][1], P[i][2]));
            for (int j = 0; j < 3; j++) {
                double area2 = 0;
                for (int k = 0; k < 3; k++) {
                    area2 += fabs(xmult(P[i ^ 1][j], P[i][k], P[i][k + 1]));
                }
                // 三角形i^1的第j个点是否在三角形i里面
                if (fabs(area - area2) < eps) in = true;
                else {
                    in = false;
                    break;
                }
            }
            if (in) break;
        }
        if (in) puts("contain");
        else puts("disjoint");
    }
    return 0;
}

//https://www.cnblogs.com/kangkang-/p/11635431.html