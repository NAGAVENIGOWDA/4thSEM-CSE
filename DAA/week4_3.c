#include <stdio.h>

#include <string.h>

int min_binary_string(char *s,int n) {
int count=0;
int total;
// Enter your code here
for(int i=0;i<n;i++){
    if((s[i]=='0' && s[n-i-1]=='1') || (s[n-i-1]=='0' && s[i]=='1')){
       count=count+2;
    }

    else{
        break;
    }
}
total=n-count;
return total;

}

int main() {
int n;
char s[100];
scanf("%d",&n);
scanf("%s", s);

printf("%d", min_binary_string(s,n));

return 0;

}