#include<stdio.h>
#include<string.h>
int isleft(char str[], int i, int t)
{
	for (; i <= t; i++, t--)
	{
		if (str[i] > str[t])
		{
			return 1;//�����������������һ�����ִ����ұ�����������,�򷵻�1
		}
		else if (str[i] < str[t])
		{
			return 0;//�������෴
		}
	}
	return 0;
}
int main()
{
	int l = 0, k,i=0,j;
	char s[105] = { 0 }, d[105] = { 0 }, num[105] = { 0 }, c;
	gets(s);
	//�����ַ���
	for (k = 0; s[k]; k++)
	{
		if (s[k] >= '0' && s[k] <= '9')
		{
			num[l++] = s[k];
		}
	}
	//���ַ����е����ִ�������һ��������
	l = 0;
	if (num[0])//����ַ�����������,������һ��
	{
		j = strlen(num) - 1;
		while (i<=j)
		{
			if (num[i] > num[j])//�����ߵ����ִ����ұߵ�����,��ȡ�������
			{
				d[l++] = num[i];
				i++;
			}
			else if (num[i] < num[j])//�������෴
			{
				d[l++] = num[j];
				j--;
			}
			else//������������������,�����������,�ֱ����¶�����,ֱ���ж��������ֲ����Ϊֹ
			{
				if (isleft(num, i, j))
				{
					d[l++] = num[i];
					i++;
				}
				else
				{
					d[l++] = num[j];
					j--;
				}
			}
		}
		printf("%s", d);
	}
	else
	{
		printf("0");
	}
	return 0;
}