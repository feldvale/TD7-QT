
#include <Calendar.h>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QString chemin = QFileDialog::getOpenFileName();

    TacheManager &TM = TacheManager::getInstance();
    TM.load(chemin);
    Tache &tache = TM.getTache("T1");

    TacheEditeur *TE = new TacheEditeur(tache,nullptr);
    TE->show();



    return app.exec();
}
