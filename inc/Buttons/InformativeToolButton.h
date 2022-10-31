#pragma once

#include <QToolButton>
#include <QPainter>
#include <QTimer>
#include <QLabel>

#include "progressBar.h"
#include "loadingCircle.h"

class InformativeToolButton: public QToolButton
{
    public:
        InformativeToolButton(QWidget *parent = nullptr);
        ~InformativeToolButton();

        void setOverlayColor(const QColor &color);
        void setOverlayEnable(bool enable);
        void overlayFlash(float flashSpeed, int flashCount = 1, bool endWithEnabledOverlay = false);

        const QColor &getOverlayColor() const;
        bool overlayEnabled() const;

        void setPercentage(float percentage);
        float getPercentage() const;

        void enableLoadingCircle(bool enable);
        bool isLoadingCircleEnabled() const;

    private:
        void paintEvent (QPaintEvent *e);

    private slots:
        void onUpdateTimer();
        void activateTimer();
        void stopTimer();
        void checkForTimerNeeded();


        // Overlay
        QColor m_overlayColor;
        bool m_overlayEnable;
        int m_flashCount;
        bool m_doFlash;
        bool m_flashEndWithEnabledOverlay;
        float m_flashSpeed;
        float m_flashPhase;
        float m_flashEndPhase;
        float m_flashColorFactor;


        // Loadingbar
        ProgressBar m_progressBar;

        LoadingCircle m_loadingCircle;



        QTimer *m_updateTimer;
};

