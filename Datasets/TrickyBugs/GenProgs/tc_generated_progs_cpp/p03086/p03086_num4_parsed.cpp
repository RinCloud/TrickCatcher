#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int longest_acgt_string = 0;
  int current_acgt_string = 0;
  char s[11];

  scanf("%s", s);

  for (int i = 0; i < 10; i++) {
    if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') {
      current_acgt_string++;
      if (current_acgt_string > longest_acgt_string) {
        longest_acgt_string = current_acgt_string;
      }
    } else {
      current_acgt_string = 0;
    }
  }

  printf("%d\n", longest_acgt_string);
  return 0;
}
