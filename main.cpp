#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton myButton(QIcon("filesaveas.png"),"Push Me");
    myButton.setToolTip("Click me");
    myButton.show();

    return a.exec();
}
