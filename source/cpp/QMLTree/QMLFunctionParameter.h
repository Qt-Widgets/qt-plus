
#pragma once

#include "../qtplus_global.h"

//-------------------------------------------------------------------------------------------------

// Qt
#include <QObject>
#include <QVariant>
#include <QTextStream>

// Library
#include "QMLPropertyDeclaration.h"

//-------------------------------------------------------------------------------------------------

//! Defines a function parameter
class QTPLUSSHARED_EXPORT QMLFunctionParameter : public QMLPropertyDeclaration
{
    Q_OBJECT

public:

    //-------------------------------------------------------------------------------------------------
    // Constructors and destructor
    //-------------------------------------------------------------------------------------------------

    //! Constructor with filename
    QMLFunctionParameter(const QPoint& pPosition, QMLType* pType, QMLEntity* pName);

    //! Destructor
    virtual ~QMLFunctionParameter();

    //-------------------------------------------------------------------------------------------------
    // Setters
    //-------------------------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------------------------
    // Getters
    //-------------------------------------------------------------------------------------------------

    //-------------------------------------------------------------------------------------------------
    // Overridden methods
    //-------------------------------------------------------------------------------------------------

    //!
    virtual void toQML(QTextStream& stream, const QMLEntity* pParent = nullptr, int iIdent = 0) const Q_DECL_OVERRIDE;

    //-------------------------------------------------------------------------------------------------
    // Properties
    //-------------------------------------------------------------------------------------------------

protected:
};
