struct Person {
	char name[20];
  long number;
};

int StartMenu();
int writeFile(const char *, struct Person, int);
int readFile(const char *, struct Person, int);
void enterData(struct Person);
