#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeometric_model_relationship_with_transformation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeometric_model_relationship_with_transformation



namespace cutting_tool_schema_arm
{

class CGeometric_model_relationship_with_transformation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CGeometric_model_relationship_with_transformation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CGeometric_model_relationship_with_transformation(CGeometric_model_relationship_with_transformation const& init);
	void operator=(CGeometric_model_relationship_with_transformation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CGeometric_model_relationship_with_transformation); }

	MemberAttribute<string_type,_altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType14, _altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType14> iterator; };
	MemberElement<CModel_placementType, _altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_Model_placement> Model_placement;
	struct Model_placement { typedef Iterator<CModel_placementType> iterator; };
	MemberElement<CRelatedType5, _altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_Related> Related;
	struct Related { typedef Iterator<CRelatedType5> iterator; };
	MemberElement<CRelatingType5, _altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_Relating> Relating;
	struct Relating { typedef Iterator<CRelatingType5> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CGeometric_model_relationship_with_transformation_altova_Relation_type> Relation_type;
	struct Relation_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGeometric_model_relationship_with_transformation
