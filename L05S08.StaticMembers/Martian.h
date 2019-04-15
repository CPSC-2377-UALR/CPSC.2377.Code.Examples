#ifndef MARTIAN_H
#define MARTIAN_H

class Martian{

private:
	static int population;
	static const int speedOfLight; 

public:
	Martian();
	~Martian();
	int getPopulation() const;
	static int getPopulationStatic();
	int getSOL() const;

	Martian(const Martian & src);


};

#endif