solve
(
    fvm::ddt(s)
  + fvm::div(phi, s)
);

Info<< "s: min = " << gMin(s.primitiveField())
    << "  max = " << gMax(s.primitiveField())
    << "  total = " << fvc::domainIntegrate(s).value()
    << nl << endl;
