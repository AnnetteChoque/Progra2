#ifndef ENVIO_H
#define ENVIO_H

#include <string>

class Envio {

    protected:
    std::string remNombre, remDire, remCity, remEstd, remCoP;
    std::string destNombre, destDire, destCity, destEstd, destCoP;
    double costoEstandar;

    public:

    Envio(std::string remNom, std::string remDir, std::string remCiu, std::string remEst, std::string remCP,
          std::string destNom, std::string destDir, std::string destCiu, std::string destEst, std::string destCP,
          double costoEst)
          :
           remNombre(remNom), remDire(remDir), remCity(remCiu), remEstd(remEst), remCoP(remCP),
          destNombre(destNom), destDire(destDir), destCity(destCiu), destEstd(destEst), destCoP(destCP),
          costoEstandar(costoEst) {}

    virtual double calculaCosto() const {
        return costoEstandar;
    }

    virtual ~Envio() {}
};

#endif