/* bit02.c */

#define CAT	1  /* CATを1と定義 */
#define DOG 	2  /* DOGを2と定義 */
#define RAT	4  /* RATを3と定義 */
#define RABBIT	8  /* RABBITを4と定義 */

#include<stdio.h>

int main()
{
 int a = CAT | DOG;			/*Aさんのペット*/
 int b = RAT;				/*Bさんのペット*/
 int c = CAT | DOG | RAT | RABBIT;	/*Cさんのペット*/
 int d = DOG | RAT;			/*Dさんのペット*/

 printf("Aさんのペット（猫=%d, 犬=%d, ネズミ=%d, ウサギ=%d)\n",
 	 (a & CAT)!=0, (a & DOG)!=0,  (a & RAT)!=0, (a & RABBIT)!=0);
 printf("Bさんのペット（猫=%d, 犬=%d, ネズミ=%d, ウサギ=%d)\n",
 	 (b & CAT)!=0, (b & DOG)!=0,  (b & RAT)!=0, (b & RABBIT)!=0);
 printf("Cさんのペット（猫=%d, 犬=%d, ネズミ=%d, ウサギ=%d)\n",
 	 (c & CAT)!=0, (c & DOG)!=0,  (c & RAT)!=0, (c & RABBIT)!=0);
 printf("Dさんのペット（猫=%d, 犬=%d, ネズミ=%d, ウサギ=%d)\n",
 	 (d & CAT)!=0, (d & DOG)!=0,  (d & RAT)!=0, (d & RABBIT)!=0);
 
 return 0;
}
