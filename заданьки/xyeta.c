#include <stdio.h>
#include <math.h>
/*7
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int ost = m % (n + 1);
    printf("%d", ost);
    return 0;
}*/

/*8
int main(){
    int num;
    scanf("%d", &num);
    int rez = num % 1000 / 100;
    printf("%d", rez);
    return 0;
}*/

/*9
int main(){
    int num;
    scanf("%d", &num);
    int hour = num / (60 * 60);
    num = num - hour * 60 * 60;
    int min = num / 60;
    num = num - min * 60;
    printf("%d %d %d", hour, min, num);
    return 0;
}*/

/*10
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int rez = x % y == 0;
    printf("%d", rez);

    return 0;
}*/

//11
int main(){
    float strk, stlb, nm;
    scanf("%f %f %f", &strk, &stlb, &nm);
    int cnt_nm_page = strk * stlb;
    int received_page = (nm-1) / cnt_nm_page + 1;
    int first_nm_rc_pg = received_page * cnt_nm_page - (cnt_nm_page - 1);
    float new_nm = (nm - first_nm_rc_pg) + 1;
    int received_stlb = ceil(new_nm/strk);
    int received_strk = new_nm - (received_stlb - 1) * strk;
    printf("\n%d", received_page);
    printf("\n%d", received_stlb);
    printf("\n%d", received_strk);
    return 0; 
}