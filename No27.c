#include <stdio.h>
#include <string.h>

char *guess_number(char *answer, char *guess) {
  static char result[5];  // 儲存結果的陣列
  int a = 0, b = 0;  // 計算 A 和 B 的變數
  for (int i = 0; i < 4; i++) {
    if (answer[i] == guess[i]) {  // 數字和位置都相同
      a++;
    } else if (strchr(answer, guess[i]) != NULL) {  // 數字相同但位置不同
      b++;
    }
  }
  sprintf(result, "%dA%dB", a, b);  // 將 a 和 b 的值格式化成字串
  return result;  // 傳回結果
}
int main(void) {
  char answer[5], guess[5];  // 儲存答案和猜測的數字的陣列
  scanf("%s", answer);  // 讀入答案
  while(scanf("%s", guess)){
    if(guess[0]=='0'&&guess[1]=='0'&&guess[2]=='0'&&guess[3]=='0'){
        return 0;
    }
    char *result = guess_number(answer, guess);  // 呼叫 guess_number 函數
    printf("%s\n", result);  
  }  
  return 0;
}