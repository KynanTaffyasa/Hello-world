#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
		
		for (int i = 0; i<T; i++) {
			char s[500] = {};
			scanf("%s", &s);
			
			int count = 0;
			for (int j = 0; j<500; j++) {
				if (s[j] != 0) {
					count++;
				}
			}
			
			printf("Case #%d: ", i+1);
			
			int c = 0;
			for (int j = 0; j<count/2; j++) {
				if (s[j] != s[count-j-1]) {
					printf("Nah, it's not a palindrome\n");
					break;
				} else {
					c++;
				}
			}
			
			if (c==count/2) {
				printf("Yay, it's a palindrome\n");
			}
			
		}
		
	
	return 0;
}
