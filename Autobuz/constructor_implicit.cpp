#include <iostream>
using namespace std;

class Autobuz
{
private:
	int _nrPasageri;
	
public:
	Autobuz();
	
	void Urca(int nrPasageri);

	void Coboara(int nrPasageri);

	void Info();
};

Autobuz::Autobuz():_nrPasageri(0)
{
}

void Autobuz::Urca(int nrPasageri)
{
	_nrPasageri+= nrPasageri;

}

void Autobuz::Coboara(int nrPasageri)
{
	_nrPasageri-=nrPasageri;

}

void Autobuz::Info()
{

	cout << "Numar pasageri:" << _nrPasageri << endl;

}

int main()
{
	Autobuz autobuz1;
	autobuz1.Info();
	autobuz1.Urca(7);
	autobuz1.Coboara(2);
	autobuz1.Urca(4);
	autobuz1.Info();
	getchar();
	return 0;

}
