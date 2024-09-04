#include <stdio.h>
#include <string.h>

int binary( char *str) {
  int num = 0, power = 1, len = strlen(str);

  
  for (int i = 0; i < len; i++) {
    if (str[i] != '0' && str[i] != '1') {
      printf("Error: Invalid binary string. Only characters '0' and '1' allowed.\n");
      return -1; 
    }
  }


  for (int i = 0; i < len; i++) {
    num += (str[i] - '0') * power;
    power *= 2;
  }
  return num;
}
void decimalBinary(int num,char *binary_str){
  int i=0;
  while (num > 0) {
    binary_str[i] = (num % 2) + '0';
    num /= 2;
    i++;
  }
  int len=strlen(binary_str);
  for(int j=0;j<len/2;j++){
    char temp=binary_str[j];
    binary_str[j]=binary_str[len-1-j];
    binary_str[len-1-j]=temp;

  }
  
}

int main() {
  char a[] = "11";
  char b[] = "1";
  char binary_result[32];

  int num_a = binary(a);
  int num_b = binary(b);
  int sum = num_a + num_b;
  printf("Sum of '%d' and '%d' is: %d \n", num_a, num_b, sum);

  decimalBinary(sum,binary_result);

 

  
  printf("Sum of binary strings '%s' and '%s' is: %s \n", a, b, binary_result);


  return 0;
}
