#pragma once

#include "RibbonWidget_global.h"
#include <QObject>
#include <QRect>
#include <QColor>
#include <QPainter>

class RIBBONWIDGET_EXPORT ProgressBar: public QObject
{
        Q_OBJECT
    public:
        enum Direction
        {
            leftRight,
            rightLeft,
            bottomTop,
            topBottom
        };

        ProgressBar();
        ProgressBar(const QRect &area);
        ProgressBar(const QRect &area, float percentage);
        ProgressBar(const QRect &area, float percentage, const QColor color);

        float getPercentage() const;
        const QColor getColor() const;
        bool isVisible() const;
        const QRect getRect();
        Direction getDirection() const;

        void draw(QPainter &painter);
    public slots:
        void setPercentage(float percentage);
        void setColor(const QColor color);
        void setVisible(bool isVisible);
        void setRect(const QRect area);
        void setDirection(Direction direction);
    private:

        QRect m_area;
        QColor m_color;
        bool m_isVisible;
        float m_percentage;
        Direction m_direction;
};
