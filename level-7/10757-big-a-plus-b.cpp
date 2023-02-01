#include <iostream>
#include <string>

int	chk(bool tf, int a, int b) {
	if (tf)
		if (a >= b)
			return (a);
		else
			return (b);
	else
		if (a >= b)
			return (b);
		else
			return (a);
}

class	Bignumber {
	std::string	bigstr;
	int	numlen;
	int* bigarr;
public:
	Bignumber(std::string bigstr);
	Bignumber operator +(const Bignumber &big);
	friend std::ostream& operator <<(std::ostream &os, const Bignumber &big);
};

Bignumber::Bignumber(std::string bigstr) {
	this -> bigstr = bigstr;
	numlen = bigstr.length();
	bigarr = new int[numlen];
	for (int i = 0; i < numlen; i++)
		bigarr[i] = bigstr[numlen - i - 1] - '0';
}

Bignumber	Bignumber::operator +(const Bignumber &big) {
	int	idx = 0;
	int	anslen = chk(true, this -> numlen, big.numlen) + 1;
	// std::cout << "anslen : " << anslen << std::endl;
	int	*ansarr = new int[anslen];
	for (int i = 0; i < anslen; i++)
		ansarr[i] = 0;
	for (; idx < chk(false, this -> numlen, big.numlen); idx++) {
		if (ansarr[idx] + this -> bigarr[idx] + big.bigarr[idx] > 9) {
			ansarr[idx] += (this -> bigarr[idx] + big.bigarr[idx] - 10);
			ansarr[idx + 1]++;
		} else {
			ansarr[idx] += (this -> bigarr[idx] + big.bigarr[idx]);
		}
	}
	// for (int i = 0; i < anslen; i++)
	// 	std::cout << "ansarr " << i << " num : " << ansarr[i] << std::endl;
	if ((chk(true, this -> numlen, big.numlen) == this -> numlen) && (this -> numlen != big.numlen)) {
		for (int i = idx; i < this -> numlen; i++) {
			ansarr[i] += this -> bigarr[i];
			if (ansarr[i] > 9) {
				ansarr[i + 1]++;
				ansarr[i] -= 10;
			}
			// std::cout << "looping " << idx << " times and number here is " << ansarr[idx] << std::endl;
		}
	} else if ((chk(true, this -> numlen, big.numlen) == big.numlen) && (this -> numlen != big.numlen)) {
		for (int i = idx; i < big.numlen; i++) {
			ansarr[i] += big.bigarr[i];
			if (ansarr[i] > 9) {
				ansarr[i + 1]++;
				ansarr[i] -= 10;
			}
			// std::cout << "looping " << idx << " times and number here is " << ansarr[idx] << std::endl;
		}
	}
	// for (int i = 0; i < anslen; i++)
    //     std::cout << "ansarr " << i << " num : " << ansarr[i] << std::endl;
	std::string	ansstr;
	if (ansarr[anslen - 1] == 0)
		anslen--;
	while (anslen) {
		ansstr += ansarr[anslen - 1] + '0';
		anslen--;
	}
	Bignumber	answer(ansstr);
	return (answer);
}

std::ostream&	operator <<(std::ostream &os, const Bignumber &big) {
	os << big.bigstr;
	return (os);
}

int	main(void) {
	std::string	number1, number2;
	std::cin >> number1 >> number2;
	Bignumber	num1(number1);
	Bignumber	num2(number2);
	std::cout << num1 + num2;
	return (0);
}
