#include<stdio.h>
#include<string.h>
int main(){
    char *zodiac[] = {"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
    char m_1,m_2,d_1,d_2;
    scanf("%c%c %c%c",&m_1,&m_2,&d_1,&d_2);
    int m=(m_1-'0')*10+(m_2-'0');
    int d=(d_1-'0')*10+(d_2-'0');
    switch (m)
{
case 1:
printf("%s\n", d < 21 ? zodiac[0] : zodiac[1]);
break;
case 2:
printf("%s\n", d < 19 ? zodiac[1] : zodiac[2]);
break;
case 3:
printf("%s\n", d < 21 ? zodiac[2] : zodiac[3]);
break;
case 4:
printf("%s\n", d< 21 ? zodiac[3] : zodiac[4]);
break;
case 5:
printf("%s\n", d < 22 ? zodiac[4] : zodiac[5]);
break;
case 6:
printf("%s\n", d < 22 ? zodiac[5] : zodiac[6]);
break;
case 7:
printf("%s\n", d< 23 ? zodiac[6] : zodiac[7]);
break;
case 8:
printf("%s\n", d < 24 ? zodiac[7] : zodiac[8]);
break;
case 9:
printf("%s\n", d < 24 ? zodiac[8] : zodiac[9]);
break;
case 10:
printf("%s\n", d < 24 ? zodiac[9] : zodiac[10]);
break;
case 11:
printf("%s\n", d < 23 ? zodiac[10] : zodiac[11]);
break;
case 12:
printf("%s\n", d < 22 ? zodiac[11] : zodiac[0]);
break;
}

return 0;
}