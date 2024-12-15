#include <iostream>

int main() {
	int A, B, C;
	std::cin >> A >> B >> C;
	
	int costAB = A < B ? C < A ? B - C : C < B ? B - A : A - C : C < B ? A - C : C < A ? B - C : C - B;
	int costBC = B < C ? A < B ? C - A : C < B ? C - B : B - A : C < B ? B - C : A < C ? A - B : C - A;
	int costAC = A < C ? C < B ? C - A : B < C ? B - C : A - B : B < A ? A - B : C < A ? C - B : A - C;
	
	int minCost = costAB < costBC ? costAB < costAC ? costAB : costAC : costBC < costAC ? costBC : costAC;
	
	std::cout << minCost;
}
