#include <QCoreApplication>
#include <collec.h>

int main(int argc, char *argv[])
{
    Books objA;
      objA.setTitle("Voina i mir");
      objA.setAuthor("Lev Tolstoy");
      objA.setYear(1867);
      objA.PrintBook();

    Movies objB;
      objB.setName("Interstellar");
      objB.setGenre("Science fiction");
      objB.setYear(2014);
      objB.PrintMovies();

    QCoreApplication a(argc, argv);
    return a.exec();
}
