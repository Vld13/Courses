struct Person {
  long number;
	char name[10];
};

void StartMenu();
int writeFile(const char *, struct Person *, int);
int readFile(const char *, struct Person *, int);
void enterData(struct Person *);
