#include <stdio.h>
#include<string.h>
 int main(int argc, char const *argv[])
 {
 	char v[600];

 	gets(v);
 	  printf((strlen(v)>140)?"MUTE\n":"TWEET\n");
 	return 0;
 }
