#pragma once

enum Estado {
    MORTO = 0,
    VIVO = 1
};

class Celula {
public:
    Celula(Estado estado = Estado::MORTO) : _estado(estado) {}

    void vive() {
        _estado = Estado::VIVO;
    }

    void morre() {
        _estado = Estado::MORTO;
    }

    Estado getEstado() const {
        return _estado;
    }

private:
    Estado _estado;
};

