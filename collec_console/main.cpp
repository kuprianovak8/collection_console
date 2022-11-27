#include <QCoreApplication>
#include <collec.h>

int main(int argc, char *argv[]) //происходит добавление объектов в хранилище
{
    Books objA;
      objA.setTitle("Voina i mir");
      objA.setAuthor("Lev Tolstoy");
      objA.setYear(1867);
//      objA.showBooks();

    Movies objB;
      objB.setName("Interstellar");
      objB.setGenre("Science fiction");
      objB.setYear(2014);
//      objB.showMovies();

      Collections objC;
      objC.getBooks();
      objC.addBook();

    QCoreApplication a(argc, argv);
    return a.exec();
}
