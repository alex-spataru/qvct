// INDENTING (emacs/vi): -*- mode:c++; tab-width:2; c-basic-offset:2; intent-tabs-mode:nil; -*- ex: set tabstop=2 expandtab:

/*
 * Qt Virtual Chart Table (QVCT)
 * Copyright (C) 2012 Cedric Dufour <http://cedric.dufour.name>
 * Author: Cedric Dufour <http://cedric.dufour.name>
 *
 * The Qt Virtual Chart Table (QVCT) is free software:
 * you can redistribute it and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation, Version 3.
 *
 * The Qt Virtual Chart Table (QVCT) is distributed in the hope
 * that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 */

#ifndef QVCT_CTRACKOVERLAYLISTVIEW_HPP
#define QVCT_CTRACKOVERLAYLISTVIEW_HPP

// QT
#include <QPushButton>
#include <QStackedWidget>
#include <QWidget>

// QVCT
class CTrackOverlay;


/// [UI] Track overlay's list view
/**
 *  This class implements the user-interface that allows to store and display
 *  the track overlay.
 *  @author Cedric Dufour <http://cedric.dufour.name>
 */
class CTrackOverlayListView: public QWidget
{
  Q_OBJECT


  //------------------------------------------------------------------------------
  // FIELDS
  //------------------------------------------------------------------------------

private:
  /// Track overlay
  CTrackOverlay* poTrackOverlay;

  /// [UI:Button] Load
  QPushButton* pqPushButtonLoad;
  /// [UI:Button] Up
  QPushButton* pqPushButtonUp;
  /// [UI:Button] Down
  QPushButton* pqPushButtonDown;
  /// [UI:Button] Actions
  QPushButton* pqPushButtonActions;


  //------------------------------------------------------------------------------
  // CONSTRUCTORS / DESTRUCTOR
  //------------------------------------------------------------------------------

public:
  CTrackOverlayListView( QWidget* _pqParent );
  virtual ~CTrackOverlayListView() {};

private:
  /// Constructs the layout of the user-interface
  void constructLayout();


  //------------------------------------------------------------------------------
  // METHODS
  //------------------------------------------------------------------------------

  // SLOTS
private slots:
  /// [UI:Slot] Slot to load overlay's content from file
  void slotLoad();
  /// [UI:Slot] Slot to move overlay's content up
  void slotUp();
  /// [UI:Slot] Slot to move overlay's content down
  void slotDown();
  /// [UI:Slot] Slot to show additional actions
  void slotActions();

};

#endif // QVCT_CTRACKOVERLAYLISTVIEW_HPP
