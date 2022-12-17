#pragma once
#include <cmath>
class bond
{
	private: 
		double Spot; 
		double InterestRate; 
		double Maturity;

		double Yield; 
	
	public:
		bond(double spot, double interestRate, double maturity){
			Spot = spot; 
			InterestRate = interestRate;
			Maturity = maturity;


			Yield = InterestRate;
			double Calculatedspot(double Inputyield){
				Calculatedspot = 100. * pow(1 + Yield, -1. * Maturity);
				for (int i = 1; i < Maturity; i++) {
					Calculatedspot += 100. * InterestRate * pow(1 + Yield, -1. * i);
				};
			};
		};
		~bond() {};
};

