#include <iostream>

using namespace std;

int a = 0;

class chair
{
private:
	int leggys;
	int privVar;
public:
	int pubVar;
	chair() { leggys = 4; };
	chair(int ml) { leggys = ml; };
	int getLeggys() { return leggys; }
	void setLeggys(int lg) { leggys = lg; }
	void printLeggys();
	virtual void whoiam();
};

class bench :public chair
{
private:
	int backbars;
public:
	bench() :chair(6)
	{
		backbars = 8;
	}
	bench(int bb, int lg) :chair(lg)
	{
		backbars = bb;
	}
	void printBackbars();
	void whoiam();
};

chair throne;
chair stool = chair(3);
chair sofa(6);
bench bnch(4, 6);

int main()
{
	std::cout << "throne leggys = " << throne.getLeggys() << std::endl;
	std::cout << "stool leggys = " << stool.getLeggys() << std::endl;
	std::cout << "sofa leggys = " << sofa.getLeggys() << std::endl;

	bnch.printLeggys();
	bnch.printBackbars();
	
	sofa.whoiam();
	bnch.whoiam();

	system("pause");
}

void chair::printLeggys()
{
	cout << "I have " << leggys << " leggys\n";
}

void chair::whoiam()
{
	cout << "I am a chair!\n";
}

void bench::printBackbars()
{
	cout << "I have " << backbars << " backbars\n";
}

void bench::whoiam()
{
	cout << "I am a bench!\n";
}