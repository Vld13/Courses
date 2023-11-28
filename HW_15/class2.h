class Sphere
{
	int m_radius;

	public:
		Sphere(int radius = 1)
			:m_radius{radius}{};

		int getRadius() { return m_radius; }
		//virtual Sphere *getThis() { return this; }
		virtual Sphere *calc() {return this;}
};

class CalcLength: public Sphere
{ 
	float m_length;

	public:
	  CalcLength(int radius = 1,float length = 0.0)
			:Sphere{radius},m_length{length}{}

		//virtual CalcLength *getThis() { return this; }	
		virtual CalcLength *calc();
};

class CalcArea: public Sphere
{
	float m_area;

	public:
	  CalcArea(int radius = 1, float area = 0.0)
			:Sphere{radius},m_area{area}{}

		//virtual CalcArea *getThis() { return this; }
		virtual CalcArea *calc();
};

class CalcVolume: public Sphere
{
	float m_volume;

	public:
	  CalcVolume(int radius = 1, float volume = 0.0)
			:Sphere{radius},m_volume{volume}{}

		//virtual CalcVolume *getThis() { return this; }
		virtual CalcVolume *calc();
};

void showResult(Sphere &);
