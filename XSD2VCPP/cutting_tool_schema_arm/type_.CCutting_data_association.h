#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_data_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_data_association



namespace cutting_tool_schema_arm
{

class CCutting_data_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCutting_data_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCutting_data_association(CCutting_data_association const& init);
	void operator=(CCutting_data_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCutting_data_association); }

	MemberAttribute<string_type,_altova_mi_altova_CCutting_data_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CCutting_data_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_materialType, _altova_mi_altova_CCutting_data_association_altova_Associated_material> Associated_material;
	struct Associated_material { typedef Iterator<CAssociated_materialType> iterator; };
	MemberElement<CDepth_of_cutType, _altova_mi_altova_CCutting_data_association_altova_Depth_of_cut> Depth_of_cut;
	struct Depth_of_cut { typedef Iterator<CDepth_of_cutType> iterator; };
	MemberElement<CFeedType, _altova_mi_altova_CCutting_data_association_altova_Feed> Feed;
	struct Feed { typedef Iterator<CFeedType> iterator; };
	MemberElement<CSpeedType, _altova_mi_altova_CCutting_data_association_altova_Speed> Speed;
	struct Speed { typedef Iterator<CSpeedType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_data_association
