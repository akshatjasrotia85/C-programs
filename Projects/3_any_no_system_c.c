#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int c = 1;
  while (c == 1) {
    int ch;
    printf("*********************************\n");
    printf("enter 1 for BINARY to DECIMAL\n");
    printf("*********************************\n");
    printf("enter 2 for DECIMAL to BINARY\n");
    printf("*********************************\n");
    printf("enter 3 for OCTAL to DECIMAL \n");
    printf("*********************************\n");
    printf("enter 4 for DECIMAL to OCTAL \n");
    printf("*********************************\n");
    printf("enter 5 for HEXADECIMAL to DECIMAL \n");
    printf("*********************************\n");
    printf("enter 6 for DECIMAL to HEXADECIMAL \n");
    printf("*********************************\n");
    printf("enter 7 for OCTAL to HEXADECIMAL \n");
    printf("*********************************\n");
    printf("enter 8 for HEXIDECIMAL to OCTAL \n");
    printf("*********************************\n");
    printf("enter 9 for OCTAL to BINARY\n");
    printf("*********************************\n");
    printf("enter 10 for BINARY to OCTAL\n");
    printf("*********************************\n");
    printf("enter 11 for HEXADECIMAL to BINARY\n");
    printf("*********************************\n");
    printf("enter 12 for BINARY to HEXADECIMAL\n");
    printf("**********************************\n");
    scanf("%d", &ch);
    if (ch == 1) {
      int n, rem, dec = 0, i = 0;
      printf("enter a binary no. before point:");
      scanf("%d", &n);
      // binary intergarl part to decimal intergarl part code snippet.
      while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
      }
      int akshat, r, count = 0;
      float d = 0, l;
      printf("enter a binary no. after point:");
      scanf("%d", &akshat);
      // counting the digits in fractional part of binary no. .
      for (int k = akshat; k > 0; k = k / 10) {
        count++;
      }
      int c = count + 1;
      int temp = akshat;
      // binary fractinal part to decimal fractional part code snippet.
      while (c > 0) {
        r = temp % 10;
        l = 1 / (pow(2, c));
        d += r * l;
        c--;
        temp = temp / 10;
      }
      printf("%f is the decimal no. we desire\n", dec + d * 2);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);
      if (c == 0) {
        c = 0;
        break;
      } else {
        system("clear");
        continue;
      }
      continue;
    } else if (ch == 2) {
      float n;
      int bin = 0, rem, i = 1;
      printf("enter a decimal:");
      scanf("%f", &n);
      // separting the intergral and fractional part.
      int p = n;
      float akshat = n - p;
      // decimal intergarl part to binary intergarl part code snippet.
      while (p != 0) {
        rem = p % 2;
        p /= 2;
        bin += rem * i;
        i *= 10;
      }
      int b, jasrotia = 1, d = 0, e;
      // to find digits in fractional part.
      float no = n;
      int ct = 0;
      while (no != ((int)no)) {
        ct++;
        no = no * 10;
      }
      // decimal fractinal part to binary fractional part code snippet.
      while (ct > 0) {
        b = 2 * akshat;
        akshat = 2 * akshat;
        e = akshat;
        akshat = akshat - e;
        d += b * jasrotia;
        jasrotia *= 10;
        ct--;
      }
      // revesing the no. .
      int rm, rv = 0;
      while (d != 0) {
        rm = d % 10;
        rv = rv * 10 + rm;
        d /= 10;
      }
      printf("%d.%d is the binary no. after point\n", bin, rv);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 3) {
      int n, rem, dec = 0, i = 0;
      printf("enter a octal no. before point:");
      scanf("%d", &n);
      // boctalintergarl part to decimal intergarl part code snippet.
      while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(8, i);
        ++i;
      }
      int akshat, r, count = 0;
      float d = 0, l;
      printf("enter a octal no. after point:");
      scanf("%d", &akshat);
      // counting the digits in fractional part of octal no. .
      for (int k = akshat; k > 0; k = k / 10) {
        count++;
      }
      int c = count + 1;
      int temp = akshat;
      // octal fractinal part to decimal fractional part code snippet.
      while (c > 0) {
        r = temp % 10;
        l = 1 / (pow(8, c));
        d += r * l;
        c--;
        temp = temp / 10;
      }
      printf("%f is the decimal no. we desire\n", dec + d * 8);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
        break;
      } else {
        system("clear");
        continue;
      }
      continue;
    } else if (ch == 4) {
      float n;
      int bin = 0, rem, i = 1;
      printf("enter a decimal:");
      scanf("%f", &n);
      // separting the intergral and fractional part.
      int p = n;
      float akshat = n - p;
      // decimal intergarl part to octal intergarl part code snippet.
      while (p != 0) {
        rem = p % 8;
        p /= 8;
        bin += rem * i;
        i *= 10;
      }
      int b, jasrotia = 1, d = 0, e;
      // to find digits in fractional part.
      float no = n;
      int ct = 0;
      while (no != ((int)no)) {
        ct++;
        no = no * 10;
      }
      // decimal fractinal part to octal fractional part code snippet.
      while (ct > 0) {
        b = 8 * akshat;
        akshat = 8 * akshat;
        e = akshat;
        akshat = akshat - e;
        d += b * jasrotia;
        jasrotia *= 10;
        ct--;
      }
      // revesing the no. .
      int rm, rv = 0;
      while (d != 0) {
        rm = d % 10;
        rv = rv * 10 + rm;
        d /= 10;
      }
      printf("%d.%d is the octal no. after point\n", bin, rv);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 5) {
      // Using printf %X and %x
      int n;
      printf("Please enter a hexaecimal:");
      scanf("%x", &n);
      printf("the decimal number is %d\n", n);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 6) {
      // Using printf %X and %x
      int n;
      printf("Please enter a integer decimal:");
      scanf("%d", &n);
      printf("the hexadecimal number is %X\n", n);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 7) {
      // Using printf %X,%xand %o
      int n;
      printf("Please enter a integer octal:");
      scanf("%o", &n);
      printf("the hexadecimal number is %X\n", n);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 8) {
      // Using printf %X,%x and %o
      int n;
      printf("Please enter a integer hexadecimal:");
      scanf("%x", &n);
      printf("the octal number is %o\n", n);
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 9) {
      char octalnum[1000];
      long i = 0;
      printf("Enter any octal number: ");
      scanf("%s", octalnum);
      printf("Equivalent binary value: ");
      while (octalnum[i]) {
        switch (octalnum[i]) {
        case '0':
          printf("000");
          break;
        case '1':
          printf("001");
          break;
        case '2':
          printf("010");
          break;
        case '3':
          printf("011");
          break;
        case '4':
          printf("100");
          break;
        case '5':
          printf("101");
          break;
        case '6':
          printf("110");
          break;
        case '7':
          printf("111");
          break;
        case '.':
          printf(".");
          break;
        default:
          printf("\n Invalid octal digit %c \n", octalnum[i]);
          return 0;
        }
        i++;
      }
      printf("\n**********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }

    } else if (ch == 10) {
      int n, rem, dec = 0, i = 0;
      printf("enter a intergral binary no.:");
      scanf("%d", &n);
      // binary intergarl part to decimal intergarl part code snippet.
      while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
      }
      printf("%o is the octal no. we desire\n", dec);
      printf("\n**********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }

    } else if (ch == 11) {
      char hexanum[1000];
      long i = 0;
      printf("Enter any hexadecimal number in small capital: ");
      scanf("%s", hexanum);
      printf("Equivalent binary value: ");
      while (hexanum[i]) {
        switch (hexanum[i]) {
        case '0':
          printf("0000");
          break;
        case '1':
          printf("0001");
          break;
        case '2':
          printf("0010");
          break;
        case '3':
          printf("0011");
          break;
        case '4':
          printf("0100");
          break;
        case '5':
          printf("0101");
          break;
        case '6':
          printf("0110");
          break;
        case '7':
          printf("0111");
          break;
        case '8':
          printf("1000");
          break;
        case '9':
          printf("1001");
          break;
        case 'a':
          printf("1010");
          break;
        case 'b':
          printf("1011");
          break;
        case 'c':
          printf("1100");
          break;
        case 'd':
          printf("1101");
          break;
        case 'e':
          printf("1110");
          break;
        case 'f':
          printf("1111");
          break;
        case '.':
          printf(".");
          break;
        default:
          printf("\n Invalid hexadecimal digit\n");
          return 0;
        }
        i++;
      }
      printf("\n**********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    } else if (ch == 12) {
      int n, rem, dec = 0, i = 0;
      printf("enter a intergarl binary no.:");
      scanf("%d", &n);
      // binary intergarl part to decimal intergarl part code snippet.
      while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
      }
      printf("%X is the decimal no. we desire\n", dec);
      printf("\n**********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }

    } else {
      printf("Invalid choice\n");
      printf("\n*********************************\n");
      printf("press 0 to stop and 1 to contiune\n");
      scanf("%d", &c);

      if (c == 0) {
        c = 0;
      } else {
        system("clear");
        continue;
      }
    }
    return 0;
  }
}
/* ALL RIGHT RESERVED TO CYBER DEPARTMENT'S ROLL NO : _______04 AKSHAT OF
 * CENTRAL UNIVERSITY OF JAMMU,NEAR BANGLA VILLAGE */