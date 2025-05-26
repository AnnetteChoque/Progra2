#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"

class Sobre : public Envio {
private:
    double largo, ancho;
    double cargoAd;
public:
    Sobre(std::string remNom, std::string remDir, std::string remCiu, std::string remEst, std::string remCP,
          std::string destNom, std::string destDir, std::string destCiu, std::string destEst, std::string destCP,
          double costoEst, double l, double a, double extra)
        : Envio(remNom, remDir, remCiu, remEst, remCP, destNom, destDir, destCiu, destEst, destCP, costoEst),
          largo(l), ancho(a), cargoAd(extra) {}

    double calculaCosto() const override {
        if (largo > 25 || ancho > 30) {
            return costoEstandar + cargoAd;
        }
        else {
            return costoEstandar;
        }
    }
};

#endif
