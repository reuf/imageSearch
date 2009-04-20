#ifndef IMAGE_SEARCH_SCORE_TABLE_FACTORY_H
#define IMAGE_SEARCH_SCORE_TABLE_FACTORY_H

#include "ScoreTable.h"

namespace ImageSearch
{

  class ScoreTableFactory {
  public:
    static ScoreTable* create (int rows, int cols, int nKeptCoeffs,
			       const DbImageList &images);
  };


};

#endif // IMAGE_SEARCH_SCORE_TABLE_FACTORY_H
