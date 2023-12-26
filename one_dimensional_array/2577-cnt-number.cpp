#include <iostream>

int	main(void) {
	int	num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	int	answer = num1 * num2 * num3;
	int	arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	while (answer / 10 != 0) {
		arr[answer % 10]++;
		//std::cout << "answerf : " << answer << "\n";
		answer /= 10;
		//std::cout << "answer : " << answer << "\n";
	}
	arr[answer]++;
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << "\n";
	return	0;
}
