#ifndef __SCORE_H
#define __SCORE_H

#include <QLabel>
#include <QWidget>
#include <openbr_export.h>

namespace br
{

class BR_EXPORT_GUI Score : public QLabel
{
    Q_OBJECT

public:
    explicit Score(QWidget *parent = 0);

public slots:
    void setScore(float score);
};

}

#endif // __SCORE_H