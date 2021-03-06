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

#ifndef QVCT_CTRACKCONTAINEREDITVIEW_HPP
#define QVCT_CTRACKCONTAINEREDITVIEW_HPP

// QT
#include <QLineEdit>
#include <QTextEdit>
#include <QWidget>

// QVCT
#include "overlays/COverlayObjectEditView.hpp"
class CTrackContainer;


/// [UI] Track container's edit view
/**
 *  This class implements the user-interface that allows to edit track
 *  containers.
 *  @author Cedric Dufour <http://cedric.dufour.name>
 */
class CTrackContainerEditView: public COverlayObjectEditView
{

  //------------------------------------------------------------------------------
  // FIELDS
  //------------------------------------------------------------------------------

private:
  /// [UI:LineEdit] Name
  QLineEdit* pqLineEditName;
  /// [UI:LineEdit] Type
  QLineEdit* pqLineEditType;
  /// [UI:TextEdit] Description
  QTextEdit* pqTextEditDescription;
  /// [UI:TextEdit] Comment
  QTextEdit* pqTextEditComment;
  /// [UI:LineEdit] Symbol
  QLineEdit* pqLineEditSymbol;
  /// [UI:LineEdit] URL
  QLineEdit* pqLineEditUrl;


  //------------------------------------------------------------------------------
  // CONSTRUCTORS / DESTRUCTOR
  //------------------------------------------------------------------------------

public:
  CTrackContainerEditView( CTrackContainer* _poTrackContainer );
  virtual ~CTrackContainerEditView() {};

private:
  /// Constructs the layout of the user-interface
  void constructLayout();


  //------------------------------------------------------------------------------
  // METHODS: QDialog (override)
  //------------------------------------------------------------------------------

public slots:
  virtual void accept();

};

#endif // QVCT_CTRACKCONTAINEREDITVIEW_HPP
