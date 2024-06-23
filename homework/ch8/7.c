
#include <stdio.h>
int main()
{
  char mysuit[20] = {'c','h','d','h','h','c','d','d','s','s','h','c','d','h','s','h','c','d','s','c'};
  char myrank[20] = {'5','3','q','3','7','6','8','4','a','2','k','4','7','9','3','a','4','t','7','q'};
  int n;
  int suitindex;
  int rankindex;
  scanf("%d",&n);
  scanf("%d",&suitindex);
  scanf("%d",&rankindex);
  for(int i = 0;i<n;i++)
  {
    printf("%c%c ",myrank[rankindex],mysuit[suitindex]);
    rankindex = rankindex + 1;
    suitindex = suitindex + 1;
  }
}
