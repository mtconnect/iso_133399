#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation



namespace cutting_tool_schema_arm
{

class CTransformation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CTransformation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CTransformation(CTransformation const& init);
	void operator=(CTransformation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CTransformation); }

	MemberAttribute<string_type,_altova_mi_altova_CTransformation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CTransformation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAxis_1Type, _altova_mi_altova_CTransformation_altova_Axis_1> Axis_1;
	struct Axis_1 { typedef Iterator<CAxis_1Type> iterator; };
	MemberElement<CAxis_2Type, _altova_mi_altova_CTransformation_altova_Axis_2> Axis_2;
	struct Axis_2 { typedef Iterator<CAxis_2Type> iterator; };
	MemberElement<CLocal_originType, _altova_mi_altova_CTransformation_altova_Local_origin> Local_origin;
	struct Local_origin { typedef Iterator<CLocal_originType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation
