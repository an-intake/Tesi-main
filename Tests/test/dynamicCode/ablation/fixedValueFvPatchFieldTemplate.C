/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "fixedValueFvPatchFieldTemplate.H"
#include "addToRunTimeSelectionTable.H"
#include "fvPatchFieldMapper.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "unitConversion.H"
//{{{ begin codeInclude

//}}} end codeInclude


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    // dynamicCode:
    // SHA1 = 16d52fe211ae612e36593e88edd61121fc739bef
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void ablation_16d52fe211ae612e36593e88edd61121fc739bef(bool load)
    {
        if (load)
        {
            // code that can be explicitly executed after loading
        }
        else
        {
            // code that can be explicitly executed before unloading
        }
    }
}

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

makeRemovablePatchTypeField
(
    fvPatchScalarField,
    ablationFixedValueFvPatchScalarField
);


const char* const ablationFixedValueFvPatchScalarField::SHA1sum =
    "16d52fe211ae612e36593e88edd61121fc739bef";


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

ablationFixedValueFvPatchScalarField::
ablationFixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    fixedValueFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        Info<<"construct ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef"
            " from patch/DimensionedField\n";
    }
}


ablationFixedValueFvPatchScalarField::
ablationFixedValueFvPatchScalarField
(
    const ablationFixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    fixedValueFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        Info<<"construct ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef"
            " from patch/DimensionedField/mapper\n";
    }
}


ablationFixedValueFvPatchScalarField::
ablationFixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const dictionary& dict
)
:
    fixedValueFvPatchField<scalar>(p, iF, dict)
{
    if (false)
    {
        Info<<"construct ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef"
            " from patch/dictionary\n";
    }
}


ablationFixedValueFvPatchScalarField::
ablationFixedValueFvPatchScalarField
(
    const ablationFixedValueFvPatchScalarField& ptf
)
:
    fixedValueFvPatchField<scalar>(ptf)
{
    if (false)
    {
        Info<<"construct ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef"
            " as copy\n";
    }
}


ablationFixedValueFvPatchScalarField::
ablationFixedValueFvPatchScalarField
(
    const ablationFixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    fixedValueFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        Info<<"construct ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef "
            "as copy/DimensionedField\n";
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

ablationFixedValueFvPatchScalarField::
~ablationFixedValueFvPatchScalarField()
{
    if (false)
    {
        Info<<"destroy ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void ablationFixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        Info<<"updateCoeffs ablation sha1: 16d52fe211ae612e36593e88edd61121fc739bef\n";
    }

//{{{ begin code
    #line 34 "/home/grani/PATO/Tests/test2/0/T.boundaryField.heat"
const vector axis(1, 0, 0);
    	    vectorField c = this->patch().Cf();
    	    const tmp<scalarField> x_tmp = (c & axis);
	    const scalarField& x = x_tmp();
	    scalar sigma = 0.01;
	    scalar mu = 0;
	    scalar deltaT = 700;
	    scalar Tini = 273;
            operator==(deltaT*exp(-pow(x-mu,2)/(2*pow(sigma,2)))+Tini);
//}}} end code

    this->fixedValueFvPatchField<scalar>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

