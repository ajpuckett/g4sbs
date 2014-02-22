#ifndef __G4SBSBeamlineBuilder_hh
#define __G4SBSBeamlineBuilder_hh

#include "G4SBSComponent.hh"

class G4SBSBeamlineBuilder: public G4SBSComponent {
    public:
	G4SBSBeamlineBuilder(G4DetectorConstruction *);
	~G4SBSBeamlineBuilder();

	void BuildComponent(G4LogicalVolume *);


    private:
}

#endif//__G4SBSBeamlineBuilder_hh