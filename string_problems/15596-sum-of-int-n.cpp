#include <vector>

long long	sum(std::vector<int> &a);

long long	sum(std::vector<int> &a) {
	long long	answer;
	for (int i = 0; i < a.size(); i++)
		answer += a[i];
	return	answer;
}
