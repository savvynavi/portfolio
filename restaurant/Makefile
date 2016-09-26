test: main.cpp drink.o meals.o water.o wine.o food.o pizza.o icecream.o
	g++ main.cpp drink.o meals.o water.o wine.o food.o pizza.o icecream.o -o restaurant

wine.o: wine.h wine.cpp
	g++ -c wine.cpp

water.o: water.h water.cpp
	g++ -c water.cpp

meals.o: meals.h meals.cpp
	g++ -c meals.cpp

drink.o: drink.h drink.cpp
	g++ -c drink.cpp
	
food.o: food.h food.cpp
	g++ -c food.cpp
	
pizza.o: pizza.h pizza.cpp
	g++ -c pizza.cpp

icecream.o: icecream.h icecream.cpp
	g++ -c icecream.cpp

clean:
	rm *.o


