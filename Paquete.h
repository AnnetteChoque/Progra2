#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"

class Paquete : public Envio {
private:
    double largo, ancho, prof, peso, costoKg;
public:
    Paquete(std::string remNom, std::string remDir, std::string remCiu, std::string remEst, std::string remCP,
            std::string destNom, std::string destDir, std::string destCiu, std::string destEst, std::string destCP,
            double costoEst, double l, double a, double p, double pes, double cpk)
        : Envio(remNom, remDir, remCiu, remEst, remCP, destNom, destDir, destCiu, destEst, destCP, costoEst) {
        largo = l;
        ancho = a;
        prof = p;
        peso = (pes > 0) ? pes : 0;
        costoKg = (cpk > 0) ? cpk : 0;
    }

    double calculaCosto() const override {
        return costoEstandar + (peso * costoKg);
    }
};

#endif