#pragma once
#include <string>
#include "SparseSolver.h"

class SparseSolverFactory {
    public:
        typedef SparseSolver::Ptr SparseSolverPtr;

    public:
        SparseSolverFactory(const std::string& solver_type);
        SparseSolverPtr create() { return m_solver; }

    private:
        SparseSolverPtr m_solver;
};