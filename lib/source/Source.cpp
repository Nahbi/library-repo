#include "Member.h"
#include "ReferenceMaterial.h"
#include "ResearchPaper.h"
#include "Loan.h"
#include "Magazine.h"
#include "MyDate.h"
#include <conio.h>

void main()
{
	ReferenceMaterial *material;

	Magazine mag[1];

	MyDate d = MyDate(2011, 8, 17, 10, 1);
	mag[0] = Magazine("RP-01", "Leafsnap: A Computer Vision for automatic plant species identification", "Neraj Kumar, et al.", "Volume 1", "Mobile Computing", d);

	material = new ReferenceMaterial();

	getchar();

	material = &mag[0];

	material->displayDetails();
	getchar();

	getchar();
}
