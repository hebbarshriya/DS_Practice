#include<stdio.h>
struct Employee
{
	char name[100];
	struct dob
	{
		int day;
		int month;
		int year;
	} dmy;
	struct address 
	{
		int houseno;
		int zip;
		char state[];
	}addr;
};
void read ( struct Employee *p)
{	printf("Enter name: ");
	scanf("%s", p->name);
	printf("Enter date of birth: ");
	scanf("%d %d %d", &(p)->dmy.day, &(p)->dmy.month, &(p)->dmy.year);
	printf("Enter address: ");
	scanf("%d %d %s", &(p)->addr.houseno, &(p)->addr.zip, p->addr.state);
}
void display(struct Employee *p)
{
	printf("Name: %s\n", p->name);
	printf("Date of Birth: %d-%d-%d\n",p->dmy.day, p->dmy.month, p->dmy.year);
	printf("Address: %d, %d, %s\n", p->addr.houseno, p->addr.zip, p->addr.state);
}
int main()
{
	int i, n;
	struct Employee *p;
	printf("Enter number of employees: ");
	scanf("%d", &n);
	p = (struct Employee*) malloc (n*sizeof(struct Employee));
	for (i=0; i<n; i++)
	{
		read(p+i);
	}	
	for (i=0; i<n; i++)
	{
		display(p+i);
}}