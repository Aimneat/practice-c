#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char form[]);
/*��ӡ���������*/
int main() {
	int len;   /*��ǰ�г���*/
	int max;  /*��ĿǰΪֹ���ֵ���еĳ���*/
	char line[MAXLINE];    /*��ǰ�������*/
	char longest[MAXLINE]; /*���ڱ��������*/

	max = 0;

	//printf("%d\n", max);
	while((len=getline(line,MAXLINE))>0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)  /*��һ��*/
		printf("%s", longest);
	return 0;
}

/*getline:��һ�ж���s�в������䳤��*/
int getline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/*copy:��from������to���ٶ�to�㹻��*/
void copy(char to[], char from[]) {
	int i=0;
	while ((to[i] = from[i]) != '\0')
		++i;
}