struct Person {
	char name[10];
	char surname[15];
  char number[20];
};

int startMenu();
int writeFile(const char *, struct Person, int);
int viewAllPersons(const char *, struct Person, int);
int searchPerson(const char *, struct Person);
void enterData(struct Person);
