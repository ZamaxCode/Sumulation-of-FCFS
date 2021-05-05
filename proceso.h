#ifndef PROCESO_H
#define PROCESO_H
#include <QString>

class Proceso
{
public:
    Proceso();

    char getOperation() const;
    void setOperation(char value);

    int getDigit1() const;
    void setDigit1(int value);

    int getDigit2() const;
    void setDigit2(int value);

    int getTimeMax() const;
    void setTimeMax(int value);

    int getId() const;
    void setId(int value);

    int getResult() const;
    void setResult(int value);

    int getTt() const;
    void setTt(int value);

    int getLlegada() const;
    void setLlegada(int value);

    int getFinal() const;
    void setFinal(int value);

    int getRetorno() const;
    void setRetorno(int value);

    int getRespuesta() const;
    void setRespuesta(int value);

    int getEspera() const;
    void setEspera(int value);

    int getServicio() const;
    void setServicio(int value);

    bool getFirst() const;
    void setFirst(bool value);

    bool getBlocked() const;
    void setBlocked(bool value);

    bool getError() const;
    void setError(bool value);

    int getContBlocked() const;
    void setContBlocked(int value);

    bool getExec() const;
    void setExec(bool value);

private:
    char operation;
    int digit1;
    int digit2;
    int timeMax;
    int id;
    int result;
    int tt;
    int llegada; //cuando llega
    int final;  //cuando sale
    int retorno; //final - llegada
    int respuesta; //la primera vez que llega a ejecucion
    int espera; //retorno - servicio
    int servicio; //tt
    int contBlocked;
    bool first;
    bool blocked;
    bool error;
    bool exec;
};

#endif // PROCESO_H
