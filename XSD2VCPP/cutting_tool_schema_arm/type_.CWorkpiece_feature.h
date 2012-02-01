#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CWorkpiece_feature
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CWorkpiece_feature



namespace cutting_tool_schema_arm
{

class CWorkpiece_feature : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CWorkpiece_feature(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CWorkpiece_feature(CWorkpiece_feature const& init);
	void operator=(CWorkpiece_feature const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CWorkpiece_feature); }

	MemberAttribute<string_type,_altova_mi_altova_CWorkpiece_feature_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CWorkpiece_feature_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType26, _altova_mi_altova_CWorkpiece_feature_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType26> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CWorkpiece_feature_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CRepresentationType, _altova_mi_altova_CWorkpiece_feature_altova_Representation> Representation;
	struct Representation { typedef Iterator<CRepresentationType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CWorkpiece_feature
