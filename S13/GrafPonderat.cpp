#include "GrafPonderat.h"
#include <iostream>
#include <iomanip>


GrafPonderat::GrafPonderat()
{
    m_numNodes = 0;
    m_numArestes = 0;
}

GrafPonderat::GrafPonderat(const std::vector<std::string>& nodes, const std::vector<std::vector<int>>& parelles_nodes, const std::vector<int>& pesos)
{
    m_nodes = nodes;
    m_numNodes = m_nodes.size();
    m_numArestes = parelles_nodes.size();

    // TODO Crida crearMatriu
}

GrafPonderat::~GrafPonderat()
{
}

void GrafPonderat::crearMatriu(const std::vector<std::vector<int>>& parelles /*, TODO: Afegeix l'atribut necessari */)
{
    m_matriuAdj.resize(m_numNodes);
    for (size_t i = 0; i < m_numNodes; i++)
    {
        m_matriuAdj[i].resize(m_numNodes, 0);
    }

    // TODO IMPLEMENTAR
}
